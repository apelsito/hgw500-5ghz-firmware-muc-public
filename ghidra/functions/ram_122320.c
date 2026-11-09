/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00122320 */

void FUN_ram_00122320(int param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  *(undefined1 *)(param_1 + 0x6b6) = 0;
  *(char *)(param_1 + 0x6b5) = *(char *)(param_1 + 0x6b5) + '\x01';
  *(undefined1 *)(param_1 + 0x6b7) = 0;
  uVar3 = FUN_ram_0013d894(param_1,0);
  uVar3 = uVar3 & 0xff;
  if ((*(ushort *)(param_1 + 0xc) & 0x4000) == 0) {
    cVar1 = (&DAT_ram_0018d2dc)[uVar3];
joined_r0x0012240c:
    if ((cVar1 != '\x01') ||
       ((*(uint *)(*(int *)(**(int **)(param_1 + 4) + 0x1c) + 0x4678) & 0xff00) >> 8 < 0xc)) {
      *(undefined **)(param_1 + 0x6c4) = &DAT_ram_0018c170;
      uVar3 = (uint)*(ushort *)(param_1 + 0x6c0);
      FUN_ram_0011c894(param_1,0);
      *(undefined1 *)(param_1 + 0x6b8) = 0;
      *(undefined1 *)(param_1 + 0x789) = 0;
      *(undefined1 *)(param_1 + 0x788) = 0;
      *(uint *)(param_1 + 0x6c0) = uVar3;
      uVar4 = 7;
      goto LAB_ram_0012250c;
    }
    uVar5 = (uint)DAT_ram_8002c8e8;
    if (3 < uVar5) {
      DAT_ram_8002c8e8 = 1;
      uVar5 = 1;
    }
    *(undefined **)(param_1 + 0x6c4) =
         &DAT_ram_0018d21c + (uint)*(byte *)(param_1 + 0x6b8) * 6 + uVar5 * 0x30;
    FUN_ram_0011c894(param_1,(&DAT_ram_0018d21c +
                             (uint)*(byte *)(param_1 + 0x6b8) * 6 + uVar5 * 0x30)
                             [(uint)*(byte *)(param_1 + 0x6b7) * 2]);
    if (2 < DAT_ram_8002c229) {
      FUN_ram_000ee260(s_PPPC____pM__best__u__active_prob_ram_001c3850,param_1 + 0x96,uVar3,
                       DAT_ram_8002c8e8);
    }
  }
  else {
    if (uVar3 < 0x4d) {
      cVar1 = (&DAT_ram_0018d32c)[uVar3];
      goto joined_r0x0012240c;
    }
    FUN_ram_000ee260(s_PPPC____pM__error__unsupported_b_ram_001c3820,param_1 + 0x96,uVar3);
    *(undefined **)(param_1 + 0x6c4) = &DAT_ram_0018c170;
    uVar2 = *(ushort *)(param_1 + 0x6c0);
    FUN_ram_0011c894(param_1,0);
    *(undefined1 *)(param_1 + 0x6b8) = 0;
    *(undefined1 *)(param_1 + 0x789) = 0;
    *(undefined1 *)(param_1 + 0x788) = 0;
    *(uint *)(param_1 + 0x6c0) = (uint)uVar2;
  }
  uVar4 = 5;
  uVar3 = 500;
LAB_ram_0012250c:
  FUN_ram_0011c9d4(param_1,uVar4,uVar3);
  return;
}


