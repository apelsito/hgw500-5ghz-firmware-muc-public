/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011bff8 */

void FUN_ram_0011bff8(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  undefined *local_24 [4];
  
  if ((DAT_ram_8002c21c & 0x80) != 0) {
    local_24[0] = PTR_DAT_ram_001a6454_ram_001a6444;
    local_24[1] = PTR_DAT_ram_001a6458_ram_001a6448;
    local_24[2] = PTR_DAT_ram_001a645c_ram_001a644c;
    local_24[3] = PTR_DAT_ram_001a6460_ram_001a6450;
    FUN_ram_000ee260(s_WMM_AC_Parameters__ram_001c2b5c);
    iVar1 = 0;
    iVar2 = 4;
    do {
      FUN_ram_000ee260(s__s__aifsn__u_cwmin__u_cwmax__u_t_ram_001c2b70,local_24[iVar1],param_1[1],
                       param_1[2],param_1[3],*(undefined2 *)(param_1 + 4),*param_1);
      param_1 = param_1 + 8;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 1;
    } while (iVar2 != 0);
  }
  return;
}


