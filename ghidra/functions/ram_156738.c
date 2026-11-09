/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00156738 */

void FUN_ram_00156738(uint *param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  if (param_2 == 4) {
    *param_1 = param_3;
    return;
  }
  puVar4 = (uint *)((uint)param_1 & 0xfffffffc);
  uVar3 = *puVar4;
  uVar2 = ((int)param_1 - (int)puVar4) * 8;
  if (param_2 == 1) {
    uVar1 = 0xff;
    if (param_4 != 0) {
      if (param_4 != 1) {
        if (param_4 == 2) {
          *puVar4 = uVar3 & ~(0xff << (uVar2 & 0x1f)) | (param_3 & 0xff) << (uVar2 & 0x1f);
          return;
        }
        goto LAB_ram_001567a4;
      }
LAB_ram_00156774:
      uVar3 = uVar3 & ~((uVar1 & param_3) << (uVar2 & 0x1f));
      goto LAB_ram_001567a4;
    }
  }
  else {
    uVar1 = 0xffff;
    if (param_4 != 0) {
      if (param_4 != 1) {
        if (param_4 == 2) {
          *puVar4 = uVar3 & ~(0xffff << (uVar2 & 0x1f)) | (param_3 & 0xffff) << (uVar2 & 0x1f);
          return;
        }
        goto LAB_ram_001567a4;
      }
      goto LAB_ram_00156774;
    }
  }
  uVar3 = uVar3 | (param_3 & uVar1) << (uVar2 & 0x1f);
LAB_ram_001567a4:
  *puVar4 = uVar3;
  return;
}


