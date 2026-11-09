/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00149e9c */

void FUN_ram_00149e9c(int param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  *param_2 = 0;
  uVar2 = DAT_ram_8002c268;
  if (DAT_ram_8002c268 != 0) {
    puVar4 = &DAT_ram_8002c26c;
    uVar6 = 0;
    do {
      puVar3 = param_2 + uVar5 * 0xc + 1;
      if (*puVar4 != 0) {
        *puVar3 = *puVar4;
        uVar1 = *(ushort *)(param_1 + 0x4022);
        puVar3[1] = puVar4[1];
        puVar3[2] = puVar4[8] >> 2;
        puVar3[3] = puVar4[9] >> 2;
        puVar3[4] = puVar4[10] >> 2;
        puVar3[5] = puVar4[0xb];
        puVar3[6] = puVar4[2];
        puVar3[7] = puVar4[4];
        puVar3[8] = puVar4[3];
        puVar3[9] = puVar4[5];
        puVar3[10] = puVar4[6];
        puVar3[0xb] = puVar4[7];
        uVar5 = uVar5 + 1;
        if (2 < uVar1) {
          FUN_ram_000ee260(s_SCS_OC__chan__u_bw__u_cca_busy___ram_001c6170);
        }
        if (0x1f < uVar5) break;
      }
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 0xc;
    } while (uVar6 < uVar2);
  }
  *param_2 = uVar5;
  return;
}


