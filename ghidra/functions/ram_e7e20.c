/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e7e20 */

undefined4 FUN_ram_000e7e20(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pbVar1 = DAT_ram_001cb26c;
  if ((*(ushort *)(param_1 + 0xe) & 2) == 0) {
    while( true ) {
      if (pbVar1 == (byte *)0x0) {
        *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) | 2;
        bVar2 = FUN_ram_00171ec4();
        param_1[2] = bVar2;
        bVar2 = FUN_ram_00171eb8();
        param_1[3] = bVar2;
        param_1[0x60] = 0;
        param_1[0x61] = 0;
        param_1[0x62] = 0;
        param_1[99] = 0;
        *(byte **)(param_1 + 100) = DAT_ram_001cb270;
        *(byte **)DAT_ram_001cb270 = param_1;
        DAT_ram_001cb270 = param_1 + 0x60;
        iVar3 = FUN_ram_000f0d38(param_1);
        if (iVar3 == 0) {
          iVar3 = FUN_ram_000ee73c(0xe0,0);
          if (iVar3 != 0) {
            uVar5 = FUN_ram_000f1588(param_1,iVar3);
            FUN_ram_000efe3c(1,(param_1[3] & 0xf) << 0xc |
                               (param_1[2] & 0xf) << 8 |
                               (uint)*param_1 | (uint)*(ushort *)(param_1 + 0xe) << 0x10,uVar5,iVar3
                            );
            return 0;
          }
          FUN_ram_000f131c();
          pcVar4 = s__s__Error___failed_to_allocate_h_ram_001bc814;
        }
        else {
          pcVar4 = s__s__Error___failed_to_init_hosti_ram_001bc7f0;
        }
        FUN_ram_000ee260(pcVar4,s_uc_register_netdev_ram_001a548c);
        return 0xc;
      }
      if (param_1 == pbVar1) break;
      pbVar1 = *(byte **)(pbVar1 + 0x60);
    }
  }
  return 0x10;
}


