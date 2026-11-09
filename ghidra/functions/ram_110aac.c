/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00110aac */

void FUN_ram_00110aac(undefined4 param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint extraout_r1;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar1 = *(ushort *)(param_2 + 0x10);
  uVar6 = 0;
  FUN_ram_000eea80(&DAT_ram_00201974,0,0x60);
  uVar2 = (uint)param_3[2];
  switch(uVar1 & 0x1f) {
  case 1:
    uVar8 = (uint)*(byte *)(param_2 + 4);
    break;
  case 2:
    uVar6 = uVar2 & 0xff;
    uVar8 = 0;
    break;
  default:
    uVar8 = 0;
    break;
  case 4:
    uVar6 = uVar2 * 2 & 0xff;
    uVar8 = 0;
    break;
  case 8:
    uVar8 = 0;
    uVar6 = uVar2 * 3 & 0xff;
  }
  iVar7 = *(int *)(param_3 + 4);
  if (uVar2 != 0) {
    uVar2 = 0;
    do {
      FUN_ram_000f5e6c(uVar8 + uVar2);
      uVar3 = (uint)*param_3 +
              (uint)param_3[1] * (uint)*(ushort *)(iVar7 + uVar6 * 2 + (extraout_r1 & 0xff) * 2);
      uVar4 = 0x7ffffffe;
      if (uVar3 < 0x7fffffff) {
        uVar4 = uVar3;
      }
      iVar5 = DAT_ram_80038ee4 + (uint)CARRY4(uVar4,DAT_ram_80038ee0);
      (&DAT_ram_00201974)[uVar2 * 2] = uVar4 + DAT_ram_80038ee0;
      (&DAT_ram_00201978)[uVar2 * 2] = iVar5;
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < param_3[2]);
  }
  return;
}


