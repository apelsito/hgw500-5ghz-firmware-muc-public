/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00101ec0 */

void FUN_ram_00101ec0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (DAT_ram_0018c420 != 0) {
    FUN_ram_000ee260(s__s__entry_ram_001bf7fc,s_hal_tcm_init_ram_001a5ec4);
  }
  *(undefined4 *)(param_1 + 0x108) = 0xe5040000;
  *(undefined4 *)(param_1 + 0x10c) = 0xe5040300;
  *(undefined4 *)(param_1 + 0x110) = 0xe5041740;
  *(undefined4 *)(param_1 + 0x16c) = 0xe5041c08;
  *(undefined4 *)(param_1 + 0x220) = 0xe5041c10;
  *(undefined4 *)(param_1 + 0x170) = 0xe5041c18;
  *(undefined4 *)(param_1 + 0x174) = 0xe5041c20;
  *(undefined4 *)(param_1 + 0x178) = 0xe5041c28;
  *(undefined4 *)(param_1 + 0x1c8) = 0xe5042f98;
  FUN_ram_000fe774(param_1);
  FUN_ram_000fe9e0(param_1);
  FUN_ram_000ff114(param_1,param_2);
  FUN_ram_000ff594(param_1);
  FUN_ram_000ff5dc(param_1);
  *(undefined4 *)(param_1 + 0x17c) = 0xe5041c48;
  FUN_ram_000ff5fc(param_1);
  *(undefined4 *)(param_1 + 0x180) = 0xe5041c78;
  *(undefined4 *)(param_1 + 0x184) = 0xe5041dac;
  FUN_ram_000ff674(param_1);
  *(undefined4 *)(param_1 + 0x188) = 0xe5041ee0;
  *(undefined4 *)(param_1 + 0x18c) = 0xe5042094;
  *(undefined4 *)(param_1 + 400) = 0xe5042248;
  FUN_ram_000ffb74(param_1,0);
  *(undefined4 *)(param_1 + 0x194) = 0xe50423fc;
  FUN_ram_001004dc(param_1,0);
  *(undefined4 *)(param_1 + 0x198) = 0xe504242c;
  *(undefined4 *)(param_1 + 0x19c) = 0xe5042560;
  FUN_ram_0010057c(param_1);
  *(undefined4 *)(param_1 + 0x1a0) = 0xe5042694;
  *(undefined4 *)(param_1 + 0x1a4) = 0xe5042848;
  *(undefined4 *)(param_1 + 0x1a8) = 0xe50429fc;
  FUN_ram_00100a7c(param_1,0);
  *(undefined1 **)(param_1 + 0x1ac) = &DAT_ram_e5042bb0;
  puVar1 = *(undefined4 **)(param_1 + 0x1ac);
  *puVar1 = &DAT_ram_00240018;
  puVar1[1] = 0x480030;
  puVar1[2] = 0x900060;
  puVar1[3] = 0xd800c0;
  *(undefined4 *)(param_1 + 0x1b0) = 0xe5042bc8;
  *(undefined4 **)(*(int *)(param_1 + 0xc) + 0x570) = puVar1;
  *(undefined4 *)(param_1 + 0x1b4) = 0xe5042c64;
  FUN_ram_00101490(param_1);
  *(undefined4 *)(param_1 + 0x1b8) = 0xe5042d00;
  *(undefined4 *)(param_1 + 0x1bc) = 0xe5042dd8;
  *(undefined4 *)(param_1 + 0x1c0) = 0xe5042eb0;
  FUN_ram_00101728(param_1,0);
  *(undefined4 *)(param_1 + 0x1c4) = 0xe5042f88;
  *(undefined4 *)(param_1 + 0x218) = 0xe504319c;
  FUN_ram_00101c50(param_1);
  FUN_ram_00101d94(param_1);
  return;
}


