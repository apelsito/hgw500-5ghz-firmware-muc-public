/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013fed0 */

undefined4 FUN_ram_0013fed0(uint param_1)

{
  ushort uVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 < 0x4d) {
    uVar4 = (uint)(byte)(&DAT_ram_001a8df0)[param_1];
    if (uVar4 == 0xff) {
      pcVar3 = s_qtn_ralg_sscl_cap_mcs_11n__rate_n_ram_001c5148;
    }
    else {
      if (uVar4 < 0x2f) {
        DAT_ram_0018d420 = 0;
        DAT_ram_0018d421 = 0;
        DAT_ram_0018d422 = 0;
        DAT_ram_0018d423 = 0;
        DAT_ram_0018d424 = 0;
        DAT_ram_0018d425 = 0;
        DAT_ram_0018d426 = 0;
        DAT_ram_0018d427 = 0;
        DAT_ram_0018d428 = 0;
        DAT_ram_0018d429 = 0;
        uVar1 = (&DAT_ram_0018f9e0)[uVar4];
        FUN_ram_000ee260(s_qtn_ralg_sscl_cap_mcs_11n__allow_ram_001c51ac);
        uVar4 = (uint)DAT_ram_0018f9d8;
        if (uVar4 != 0) {
          iVar5 = 0;
          do {
            while( true ) {
              if (uVar1 < (ushort)(&DAT_ram_0018f9e0)[iVar5]) break;
              FUN_ram_000ee260(&DAT_ram_001c51e0);
              uVar4 = (uint)DAT_ram_0018f9d8;
LAB_ram_0014001c:
              iVar5 = iVar5 + 1;
              if ((int)uVar4 <= iVar5) goto LAB_ram_0013ff94;
            }
            bVar2 = (byte)(&DAT_ram_001a8d18)[iVar5] >> 3;
            if (9 < bVar2) goto LAB_ram_0014001c;
            (&DAT_ram_0018d420)[bVar2] =
                 (byte)(1 << ((byte)(&DAT_ram_001a8d18)[iVar5] & 7)) | (&DAT_ram_0018d420)[bVar2];
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)uVar4);
        }
LAB_ram_0013ff94:
        FUN_ram_000ee260(&DAT_ram_001c4fd0);
        return 0;
      }
      pcVar3 = s_qtn_ralg_sscl_cap_mcs_11n__inval_ram_001c5180;
    }
  }
  else {
    pcVar3 = s_qtn_ralg_sscl_cap_mcs_11n__inval_ram_001c5120;
  }
  FUN_ram_000ee260(pcVar3);
  return 0xffffffea;
}


