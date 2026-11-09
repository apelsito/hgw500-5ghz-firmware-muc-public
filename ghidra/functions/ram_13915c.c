/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013915c */

void FUN_ram_0013915c(int param_1)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar3 = (uint *)(param_1 + 0x417c);
  iVar6 = param_1 + 0x4188;
  piVar5 = (int *)(iVar6 + (DAT_ram_0020fd40 % 0x65) * 4);
  *piVar5 = *piVar5 + 1;
  iVar4 = iVar6 + (DAT_ram_0020fd44 % 0x65) * 4;
  *(int *)(iVar4 + 0x194) = *(int *)(iVar4 + 0x194) + 1;
  iVar6 = iVar6 + (DAT_ram_0020fd48 % 0x65) * 4;
  *(int *)(iVar6 + 0x328) = *(int *)(iVar6 + 0x328) + 1;
  if (*(int *)(param_1 + 0x40d0) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x40c0);
    *(uint *)(param_1 + 0x4178) = DAT_ram_0020fd40;
    goto joined_r0x00139310;
  }
  if (*(ushort *)(param_1 + 0x40c4) < DAT_ram_0020fd40) {
    *(undefined4 *)(param_1 + 0x4174) = 1;
    if (*(char *)(param_1 + 0x40be) == '\0') {
      if (*(ushort *)(param_1 + 0x40c6) < DAT_ram_0020fd48) goto LAB_ram_001392e4;
LAB_ram_001392f4:
      *(undefined4 *)(param_1 + 0x4184) = 0;
    }
    else {
LAB_ram_0013926c:
      if ((DAT_ram_0020fd18 < (uint)(DAT_ram_0020fd14 * 10)) &&
         (DAT_ram_0020fd40 < *(uint *)(param_1 + 0x4178))) {
        uVar2 = (*(uint *)(param_1 + 0x4178) - DAT_ram_0020fd40) + *puVar3;
        *puVar3 = uVar2;
        if ((*(ushort *)(param_1 + 0x40c8) < uVar2) &&
           (DAT_ram_0020fd40 < (uint)((int)(*(ushort *)(param_1 + 0x40c4) + 100) >> 1))) {
          *(undefined4 *)(param_1 + 0x4180) = 1;
          goto LAB_ram_001392f8;
        }
      }
      else {
        *puVar3 = 0;
      }
      *(undefined4 *)(param_1 + 0x4180) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4174) = 0;
    if (*(char *)(param_1 + 0x40be) != '\0') goto LAB_ram_0013926c;
    if (DAT_ram_0020fd48 <= *(ushort *)(param_1 + 0x40c6)) goto LAB_ram_001392f4;
LAB_ram_001392e4:
    *(undefined4 *)(param_1 + 0x4184) = 1;
  }
LAB_ram_001392f8:
  uVar1 = *(ushort *)(param_1 + 0x40c0);
  *(uint *)(param_1 + 0x4178) = DAT_ram_0020fd40;
joined_r0x00139310:
  if (2 < uVar1) {
    FUN_ram_000ee260(s_fat__u_intf__u_trfc__u_fat_dec___ram_001c4884,DAT_ram_0020fd40,
                     DAT_ram_0020fd44,DAT_ram_0020fd48,*puVar3,
                     *(int *)(param_1 + 0x415c) + *(int *)(param_1 + 0x4154));
    uVar1 = *(ushort *)(param_1 + 0x40c0);
  }
  if (3 < uVar1) {
    FUN_ram_000ee260(s_txt__u_rxt__u__pri__u_sec__u_sec_ram_001c48b4,DAT_ram_0020fd2c,
                     DAT_ram_0020fd28,DAT_ram_0020fcfc,DAT_ram_0020fd00,DAT_ram_0020fd04,
                     DAT_ram_0020fd1c,DAT_ram_0020fd20,DAT_ram_0020fd08,DAT_ram_0020fd24,
                     DAT_ram_0020fd0c,DAT_ram_0020fd10,DAT_ram_0020fd14,DAT_ram_0020fd18);
  }
  return;
}


