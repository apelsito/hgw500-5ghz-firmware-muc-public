/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00108e38 */

undefined4 FUN_ram_00108e38(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x3b20);
  if (*(char *)(param_1 + 0x40bc) == '\x01') {
    if (*(int *)(param_1 + 0x4174) == 0) {
      *(int *)(param_1 + 0x40fc) = *(int *)(param_1 + 0x40fc) + 1;
      uVar2 = 0xffffffff;
    }
    else {
      if (*(char *)(param_1 + 0x40be) == '\0') {
        if (*(int *)(param_1 + 0x4184) != 0) {
          *(int *)(param_1 + 0x4100) = *(int *)(param_1 + 0x4100) + 1;
          return 0xffffffff;
        }
      }
      else if (*(int *)(param_1 + 0x4180) != 0) {
        *(int *)(param_1 + 0x4104) = *(int *)(param_1 + 0x4104) + 1;
        return 0xffffffff;
      }
      if (DAT_ram_80038ee4 - *(int *)(param_1 + 0x4688) ==
          (uint)(DAT_ram_80038ee0 < *(uint *)(param_1 + 0x4684)) &&
          DAT_ram_80038ee0 - *(uint *)(param_1 + 0x4684) < 1000) {
        *(int *)(param_1 + 0x4108) = *(int *)(param_1 + 0x4108) + 1;
        uVar2 = 0xffffffff;
      }
      else if ((*(uint *)(param_1 + 0x4678) & 0x20000000) == 0) {
        iVar3 = FUN_ram_001521c0();
        if (iVar3 < 5) {
          if ((*(int *)(param_1 + 0x3f94) == 0) ||
             (*(char *)(*(int *)(*(int *)(param_1 + 0x3f94) + 0x84) + 0x1b) == '\0')) {
            iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0xc) + 0x3014);
            uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0xc) + 0x3018);
            iVar3 = *(int *)(param_1 + 0x40d8);
            iVar6 = *(int *)(*(int *)(iVar6 + 0xc) + 0x4e0);
            if (iVar6 == iVar3) {
              *(int *)(param_1 + 0x4114) = *(int *)(param_1 + 0x4114) + 1;
              DAT_ram_800379cc = DAT_ram_800379cc + 1;
              FUN_ram_00102e04(*(undefined4 *)(param_1 + 0x3b20),0,
                               (uint)*(ushort *)(param_1 + 0x43a) << 10,0);
              uVar2 = 0xffffffff;
            }
            else {
              if (((uint)*(ushort *)(param_1 + 0x43a) << 10 < (uint)(iVar6 - iVar3)) && (iVar3 != 0)
                 ) {
                *(int *)(param_1 + 0x4118) = *(int *)(param_1 + 0x4118) + 1;
              }
              uVar1 = (uint)*(ushort *)(param_1 + 0x40ca) * 1000;
              uVar4 = iVar6 - iVar5;
              if (CARRY4(uVar1,uVar4) || (uint)*(ushort *)(param_1 + 0x43a) << 0xb <= uVar1 + uVar4)
              {
                *(int *)(param_1 + 0x411c) = *(int *)(param_1 + 0x411c) + 1;
                uVar2 = 0xffffffff;
              }
              else {
                iVar3 = FUN_ram_00108bfc(*(undefined4 *)(param_1 + 0x3b20),1,uVar1 + uVar4,
                                         CARRY4(uVar1,uVar4),&LAB_ram_00110838,0,0,0,0,param_1,0,
                                         iVar5,uVar2);
                if (iVar3 == 0) {
                  *(int *)(param_1 + 0x40d8) = iVar6;
                  uVar2 = 0;
                }
                else {
                  *(int *)(param_1 + 0x4120) = *(int *)(param_1 + 0x4120) + 1;
                  uVar2 = 0xffffffff;
                }
              }
            }
          }
          else {
            *(int *)(param_1 + 0x4110) = *(int *)(param_1 + 0x4110) + 1;
            uVar2 = 0xffffffff;
          }
        }
        else {
          *(int *)(param_1 + 0x410c) = *(int *)(param_1 + 0x410c) + 1;
          uVar2 = 0xffffffff;
        }
      }
      else {
        *(int *)(param_1 + 0x40f8) = *(int *)(param_1 + 0x40f8) + 1;
        uVar2 = 0xffffffff;
      }
    }
  }
  else {
    *(int *)(param_1 + 0x40f4) = *(int *)(param_1 + 0x40f4) + 1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


