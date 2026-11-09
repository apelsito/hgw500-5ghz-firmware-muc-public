/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f7c10 */

uint FUN_ram_000f7c10(uint param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *local_24;
  uint local_20;
  
  uVar4 = 0;
  local_24 = (int *)0x0;
  iVar2 = FUN_ram_000f7b50(&local_24,&local_20);
  if (iVar2 == 0) {
    local_24[6] = param_5 & 0xfff;
    local_24[5] = param_1;
    local_24[3] = param_2;
    local_24[4] = param_3;
    local_24[2] = param_4;
    iVar2 = DAT_ram_80038ee4 + (uint)CARRY4(DAT_ram_80038ee0,param_1);
    *local_24 = DAT_ram_80038ee0 + param_1;
    local_24[1] = iVar2;
    if ((param_5 & 2) == 0) {
      puVar5 = &DAT_ram_8002c1f4;
    }
    else {
      puVar5 = &DAT_ram_8002c200;
    }
    uVar1 = STATUS32;
    if ((uVar1 & 2) != 0) {
      STATUS32 = uVar1 & 0xfffffffd;
    }
    uVar4 = (DAT_ram_0018c05c + 1) * 0x1000;
    iVar2 = DAT_ram_0018c05c + 1;
    if (uVar4 == 0) {
      uVar4 = (DAT_ram_0018c05c + 2) * 0x1000;
      iVar2 = DAT_ram_0018c05c + 2;
    }
    DAT_ram_0018c05c = iVar2;
    iVar2 = puVar5[2];
    local_24[6] = local_24[6] | uVar4;
    local_24[7] = 0;
    puVar3 = (undefined4 *)puVar5[1];
    local_24[8] = (int)puVar3;
    puVar5[2] = iVar2 + 1;
    *puVar3 = local_24;
    puVar5[1] = local_24 + 7;
    STATUS32 = uVar1;
    uVar4 = local_20 | uVar4;
  }
  else {
    FUN_ram_000ee260(s_Error__allocating_timer_event__r_ram_001bead0,iVar2);
  }
  return uVar4;
}


