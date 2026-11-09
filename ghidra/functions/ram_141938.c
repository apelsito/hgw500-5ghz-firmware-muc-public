/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00141938 */

int FUN_ram_00141938(int param_1,int param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  
  sVar1 = *(short *)(param_1 + 0x12);
  iVar5 = (int)sVar1;
  if (iVar5 == -2000) {
    iVar5 = 0;
    if ((param_3 & 0x8000) == 0) {
      uVar4 = 0x8000;
      do {
        uVar4 = uVar4 >> 2;
        iVar5 = iVar5 + 1;
        if ((uVar4 & param_3) != 0) break;
      } while (uVar4 != 0);
      if (7 < iVar5) {
        iVar5 = 7;
      }
    }
    *(short *)(param_1 + 0x12) = (short)param_2 - (short)iVar5;
    return param_1 + 2 + iVar5 * 2;
  }
  sVar2 = *(short *)(param_1 + 0x14);
  if (*(ushort *)(param_1 + 2) < 0x100) {
    *(short *)(param_1 + 0x14) = sVar2 + 1;
    sVar3 = sVar2 + 1;
    if (0x1000 < *(ushort *)(param_1 + 0x10)) {
      *(short *)(param_1 + 0x14) = sVar2;
      sVar3 = sVar2;
    }
    if (sVar3 < 0xb) {
      if (-0xb < sVar3) goto LAB_ram_00141a54;
LAB_ram_00141a94:
      iVar5 = (int)(short)(sVar1 + 1);
      *(short *)(param_1 + 0x12) = sVar1 + 1;
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_1 + 4);
      *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_1 + 6);
      *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_1 + 8);
      *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_1 + 10);
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_1 + 0xc);
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_1 + 0x10);
      *(short *)(param_1 + 0x10) = (short)((int)(uint)*(ushort *)(param_1 + 0x10) >> 1);
      *(undefined2 *)(param_1 + 0x14) = 0;
    }
    else {
LAB_ram_001419e8:
      iVar5 = (int)(short)(sVar1 + -1);
      *(short *)(param_1 + 0x12) = sVar1 + -1;
      *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_1 + 0xc);
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_1 + 10);
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_1 + 8);
      *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_1 + 6);
      *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_1 + 4);
      *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_1 + 2);
      uVar4 = (uint)*(ushort *)(param_1 + 2) * 2;
      if (uVar4 < 0xffff) {
        *(short *)(param_1 + 2) = (short)uVar4;
        *(undefined2 *)(param_1 + 0x14) = 0;
        goto LAB_ram_00141a54;
      }
      *(undefined2 *)(param_1 + 2) = 0xffff;
      *(undefined2 *)(param_1 + 0x14) = 0;
    }
    iVar5 = param_2 - iVar5;
    param_2 = 0;
    if (iVar5 < 0) goto LAB_ram_00141b20;
    if (iVar5 < 8) {
      return param_1 + 2 + iVar5 * 2;
    }
  }
  else {
    if (0x1000 < *(ushort *)(param_1 + 0x10)) {
      sVar2 = sVar2 + -1;
      *(short *)(param_1 + 0x14) = sVar2;
    }
    if (10 < sVar2) goto LAB_ram_001419e8;
    if (sVar2 < -10) goto LAB_ram_00141a94;
LAB_ram_00141a54:
    param_2 = param_2 - iVar5;
    if (param_2 < 0) {
      return param_1 + 2;
    }
    if (param_2 < 8) {
LAB_ram_00141b20:
      return param_1 + 2 + param_2 * 2;
    }
  }
  return param_1 + 0x10;
}


