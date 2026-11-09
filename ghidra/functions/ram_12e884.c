/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012e884 */

void FUN_ram_0012e884(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  int iVar7;
  
  puVar4 = (undefined1 *)param_1[0x34b];
  iVar7 = *param_1;
  if (puVar4 == (undefined1 *)0x0) {
    iVar2 = FUN_ram_000ee73c(0x13,0);
    param_1[0x34b] = iVar2;
    if (iVar2 == 0) {
      return;
    }
    FUN_ram_000eea80(iVar2,0,0x13);
    puVar4 = (undefined1 *)param_1[0x34b];
  }
  *puVar4 = 0x54;
  puVar4[1] = 0;
  puVar4[0x10] = 0xcc;
  puVar6 = (undefined2 *)((int)param_1 + 0x96);
  puVar4[2] = 0xb0;
  puVar4[3] = 0;
  piVar3 = param_1 + 0x27;
  piVar5 = (int *)(iVar7 + 0x18);
  if (DAT_ram_8002c910 != 0) {
    puVar4[2] = (char)DAT_ram_8002c910;
    puVar4[3] = (char)((uint)DAT_ram_8002c910 >> 8);
  }
  switch(*(undefined1 *)(iVar7 + 0x2c)) {
  case 0:
  case 3:
    if ((((uint)(puVar4 + 10) & 1) == 0) && (((uint)piVar5 & 1) == 0)) {
      *(undefined2 *)(puVar4 + 10) = *(undefined2 *)piVar5;
      *(undefined2 *)(puVar4 + 0xc) = *(undefined2 *)(iVar7 + 0x1a);
      *(undefined2 *)(puVar4 + 0xe) = *(undefined2 *)(iVar7 + 0x1c);
    }
    else {
      FUN_ram_0039fe00(puVar4 + 10,piVar5,6);
    }
    if ((((uint)(puVar4 + 4) & 1) == 0) && (((uint)piVar3 & 1) == 0)) {
      *(short *)(puVar4 + 4) = (short)*piVar3;
      *(undefined2 *)(puVar4 + 6) = *(undefined2 *)((int)param_1 + 0x9e);
      *(short *)(puVar4 + 8) = (short)param_1[0x28];
    }
    else {
LAB_ram_0012ea48:
      FUN_ram_0039fe00(puVar4 + 4,piVar3,6);
    }
    break;
  case 1:
    if ((((uint)(puVar4 + 10) & 1) == 0) && (((uint)piVar5 & 1) == 0)) {
      *(undefined2 *)(puVar4 + 10) = *(undefined2 *)piVar5;
      *(undefined2 *)(puVar4 + 0xc) = *(undefined2 *)(iVar7 + 0x1a);
      *(undefined2 *)(puVar4 + 0xe) = *(undefined2 *)(iVar7 + 0x1c);
    }
    else {
      FUN_ram_0039fe00(puVar4 + 10,piVar5,6);
    }
    if ((((uint)(puVar4 + 4) & 1) == 0) && (((uint)puVar6 & 1) == 0)) {
      *(undefined2 *)(puVar4 + 4) = *puVar6;
      *(short *)(puVar4 + 6) = (short)param_1[0x26];
      *(undefined2 *)(puVar4 + 8) = *(undefined2 *)((int)param_1 + 0x9a);
    }
    else {
      FUN_ram_0039fe00(puVar4 + 4,puVar6,6);
    }
    uVar1 = *(ushort *)((int)param_1 + 0x412);
    if ((uVar1 & 0x3fff) != 0) {
      puVar4[0x11] = (char)uVar1;
      puVar4[0x12] = (byte)(uVar1 >> 8) & 0xf;
      return;
    }
    goto LAB_ram_0012e9ec;
  case 2:
    if ((((uint)(puVar4 + 10) & 1) == 0) && (((uint)piVar5 & 1) == 0)) {
      *(undefined2 *)(puVar4 + 10) = *(undefined2 *)piVar5;
      *(undefined2 *)(puVar4 + 0xc) = *(undefined2 *)(iVar7 + 0x1a);
      *(undefined2 *)(puVar4 + 0xe) = *(undefined2 *)(iVar7 + 0x1c);
    }
    else {
      FUN_ram_0039fe00(puVar4 + 10,piVar5,6);
    }
    if ((((uint)(puVar4 + 4) & 1) == 0) && (((uint)piVar5 & 1) == 0)) {
      *(undefined2 *)(puVar4 + 4) = *(undefined2 *)piVar5;
      *(undefined2 *)(puVar4 + 6) = *(undefined2 *)(iVar7 + 0x1a);
      *(undefined2 *)(puVar4 + 8) = *(undefined2 *)(iVar7 + 0x1c);
      puVar4[0x11] = 0;
      puVar4[0x12] = 0;
      return;
    }
    FUN_ram_0039fe00(puVar4 + 4,piVar5,6);
LAB_ram_0012e9ec:
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    return;
  default:
    goto switchD_ram_0012e94c_caseD_4;
  case 6:
    if ((((uint)(puVar4 + 10) & 1) == 0) && (((uint)piVar3 & 1) == 0)) {
      *(short *)(puVar4 + 10) = (short)*piVar3;
      *(undefined2 *)(puVar4 + 0xc) = *(undefined2 *)((int)param_1 + 0x9e);
      *(short *)(puVar4 + 0xe) = (short)param_1[0x28];
    }
    else {
      FUN_ram_0039fe00(puVar4 + 10,piVar3,6);
    }
    piVar3 = piVar5;
    if ((((uint)(puVar4 + 4) & 1) != 0) || (((uint)piVar5 & 1) != 0)) goto LAB_ram_0012ea48;
    *(undefined2 *)(puVar4 + 4) = *(undefined2 *)piVar5;
    *(undefined2 *)(puVar4 + 6) = *(undefined2 *)(iVar7 + 0x1a);
    *(undefined2 *)(puVar4 + 8) = *(undefined2 *)(iVar7 + 0x1c);
  }
  iVar7 = param_1[6];
  puVar4[0x11] = (char)(short)iVar7;
  puVar4[0x12] = (byte)((ushort)(short)iVar7 >> 8) & 0xf;
switchD_ram_0012e94c_caseD_4:
  return;
}


