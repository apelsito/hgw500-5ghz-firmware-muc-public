/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e7c74 */

void FUN_ram_000e7c74(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  iVar2 = param_1[7];
  param_1[7] = iVar2 + -1;
  STATUS32 = uVar1;
  if (iVar2 + -1 != 0) {
    FUN_ram_000ee260(s__s__not_releasing_netbuf_refcnt___ram_001bc7c8,s_uc_netbuf_free_ram_001a547c,
                     param_1[7]);
    return;
  }
  DAT_ram_800377f8 = DAT_ram_800377f8 + 1;
  FUN_ram_000e7b84(param_1[6],param_1[1]);
  param_1[6] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if (*param_1 != 0) {
    param_1[8] = 0;
    *DAT_ram_001cb278 = (int)param_1;
    DAT_ram_001cb278 = param_1 + 8;
    return;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  *DAT_ram_001cb280 = (int)param_1;
  DAT_ram_001cb280 = param_1 + 8;
  return;
}


