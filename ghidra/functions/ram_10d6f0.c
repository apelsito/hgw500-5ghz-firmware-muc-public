/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010d6f0 */

undefined4 FUN_ram_0010d6f0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(*param_1 + 0x1c);
  uVar3 = *(undefined4 *)(iVar2 + 0x3b20);
  FUN_ram_0010cca4();
  iVar1 = FUN_ram_00108bfc(uVar3,1,5000,0,&LAB_ram_0010e8b4,0,0,0,0,param_1,param_2);
  if (iVar1 != 0) {
    FUN_ram_0010cd00(param_1);
    if (1 < *(ushort *)(iVar2 + 0x4022)) {
      FUN_ram_000ee260(s_SCS__schedule_sample_channel_bac_ram_001c0c74);
    }
    FUN_ram_0010d538(param_1,param_2);
    return 0;
  }
  if (*(short *)(iVar2 + 0x4022) == 2) {
    FUN_ram_000ee260(s_SCS__Sample_channel__u__schedule_ram_001c0c50,*(undefined1 *)(param_2 + 4));
    return 0;
  }
  return 0;
}


