/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001166ac */

void FUN_ram_001166ac(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  
  if ((param_2 != 0) && (iVar8 = *(int *)(param_2 + 0x388), iVar8 != 0)) {
    if (*(short *)(iVar8 + 0x220) != *(short *)(param_3 + 0x20)) {
      *(short *)(iVar8 + 0x220) = *(short *)(param_3 + 0x20);
    }
    pcVar9 = (char *)(param_3 + 0x24);
    *(undefined4 *)(iVar8 + 0x218) = 0;
    *(undefined4 *)(iVar8 + 0x21c) = 0;
    uVar4 = *(uint *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0xc) + 0x3014);
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0xc) + 0x3018);
    uVar6 = (uint)*(ushort *)(iVar8 + 0x220) * 0x400;
    *(uint *)(iVar8 + 0x1e8) = uVar4 + uVar6;
    *(uint *)(iVar8 + 0x1ec) = iVar3 + (uint)CARRY4(uVar4,uVar6);
    iVar2 = FUN_ram_00160010();
    if (iVar2 == 0) {
      uVar6 = ((uint)*(ushort *)(iVar8 + 0x220) << 10) / 1000;
      iVar2 = DAT_ram_80038ee4 + (uint)CARRY4(DAT_ram_80038ee0,uVar6);
      *(uint *)(iVar8 + 0x1f0) = DAT_ram_80038ee0 + uVar6;
      *(int *)(iVar8 + 500) = iVar2;
    }
    for (; pcVar9 < (char *)(param_4 + param_3); pcVar9 = pcVar9 + (byte)pcVar9[1] + 2) {
      if (*pcVar9 == '\x05') {
        bVar1 = pcVar9[4];
        uVar6 = (uint)(byte)pcVar9[2];
        uVar7 = (int)(*(ushort *)(param_2 + 0x18) & 0xffff3fff) >> 3;
        uVar5 = bVar1 & 0xfffffffe;
        iVar2 = (uint)*(ushort *)(iVar8 + 0x220) * 0x400;
        if (((uVar5 <= uVar7) && ((int)uVar7 <= (int)((byte)pcVar9[1] + uVar5 + -4))) &&
           (((uint)(byte)pcVar9[uVar7 + (5 - uVar5)] & 1 << (*(ushort *)(param_2 + 0x18) & 7)) != 0)
           ) {
          *(undefined4 *)(iVar8 + 0x218) = 1;
        }
        if ((bVar1 & 1) == 0) {
          if (uVar6 != 0) {
LAB_ram_001168c4:
            uVar6 = uVar6 * iVar2;
            *(uint *)(iVar8 + 0x200) = uVar4 + uVar6;
            *(uint *)(iVar8 + 0x204) = iVar3 + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar4,uVar6);
            return;
          }
        }
        else {
          if (uVar6 != 0) goto LAB_ram_001168c4;
          *(undefined4 *)(iVar8 + 0x21c) = 1;
        }
        uVar6 = (uint)(byte)pcVar9[3] * iVar2;
        *(uint *)(iVar8 + 0x200) = uVar6 + uVar4;
        *(uint *)(iVar8 + 0x204) = iVar3 + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar6,uVar4);
        return;
      }
    }
  }
  return;
}


