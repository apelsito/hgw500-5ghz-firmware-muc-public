/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011e904 */

void FUN_ram_0011e904(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  FUN_ram_000ee260(s_PPPC_tx_scale_bases__ram_001c2e78);
  FUN_ram_000ee260(s_BF_NSS_80M_40M_20M_ram_001c2e90);
  uVar4 = 0;
  iVar5 = 2;
  do {
    uVar2 = 0;
    do {
      if (uVar4 == 0) {
        puVar1 = &DAT_ram_001c2ed4;
      }
      else {
        puVar1 = &DAT_ram_001c2ed0;
      }
      iVar3 = uVar2 * 3 + uVar4 * 0xc;
      FUN_ram_000ee260(s__s__uSS__u__u__u_ram_001c2eb0,puVar1,uVar2 + 1,(&DAT_ram_0018d1fe)[iVar3],
                       (&DAT_ram_0018d1fd)[iVar3],(&DAT_ram_0018d1fc)[iVar3]);
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 4);
    iVar5 = iVar5 + -1;
    uVar4 = uVar4 + 1 & 0xff;
  } while (iVar5 != 0);
  return;
}


