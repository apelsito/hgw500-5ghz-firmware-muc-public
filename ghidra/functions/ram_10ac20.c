/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010ac20 */

void FUN_ram_0010ac20(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = *(int *)(**(int **)(param_1 + 4) + 0x1c);
  FUN_ram_000ee260(s_qtn_node_switch_mu_pos_ram_001c0824);
  uVar4 = 1;
  iVar1 = 0x3e;
  uVar2 = *(uint *)(*(int *)(*(int *)(iVar3 + 0x3b20) + 0xc) + 0x2000);
  do {
    uVar5 = 0;
    do {
      if (*(int *)(uVar4 * 0x50 + iVar3 + 0x46a8 + uVar5 * 4) != 0) {
        uVar6 = 1 - uVar5;
        if (1 < uVar5) {
          uVar6 = 0;
        }
        if (param_2 == 0) {
          uVar2 = uVar2 | 0x1410;
        }
        else {
          uVar2 = uVar2 & 0xffffebef;
          uVar6 = uVar5;
        }
        FUN_ram_000ee260(s_MU_grp__u_usr_pos_is__u__switch_t_ram_001c083c,uVar4,uVar5,uVar6);
        FUN_ram_0018aeb0(uVar4,uVar6,0);
        *(uint *)(*(int *)(*(int *)(iVar3 + 0x3b20) + 0xc) + 0x2000) = uVar2;
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 2);
    iVar1 = iVar1 + -1;
    uVar4 = uVar4 + 1 & 0xff;
  } while (iVar1 != 0);
  return;
}


