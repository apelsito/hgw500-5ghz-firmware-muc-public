/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001287a8 */

void FUN_ram_001287a8(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 auStack_80 [63];
  undefined1 local_41;
  undefined1 local_3a;
  undefined1 local_39;
  
  iVar6 = *(int *)(param_1 + 0x14);
  sVar2 = *(short *)(param_1 + 0x4058);
joined_r0x001287e4:
  do {
    if (iVar6 == 0) {
      FUN_ram_00128694(param_1);
      return;
    }
    if ((((*(char *)(iVar6 + 0x2c) != '\x01') && (*(byte *)(iVar6 + 0x10) < 8)) &&
        (iVar4 = *(int *)(param_1 + 0x3f94 + (uint)*(byte *)(iVar6 + 0x10) * 4), iVar4 != 0)) &&
       (piVar5 = *(int **)(iVar4 + 0x84), piVar5 != (int *)0x0)) {
      if (*piVar5 == 0) {
        if (piVar5[4] != 0) {
          if ((*(byte *)((int)piVar5 + 0x1a) & 1) == 0) {
            iVar6 = *(int *)(iVar6 + 4);
            goto joined_r0x001287e4;
          }
LAB_ram_0012898c:
          uVar3 = 1;
LAB_ram_00128994:
          FUN_ram_00127d04(param_1,iVar6,uVar3);
        }
      }
      else {
        iVar4 = FUN_ram_00102bcc(*(undefined4 *)(param_1 + 0x3b20),*(undefined4 *)(*piVar5 + 8));
        puVar7 = (undefined4 *)*piVar5;
        if (iVar4 == 0) {
          if (((puVar7 == (undefined4 *)0x0) && (piVar5[4] != 0)) &&
             ((*(byte *)((int)piVar5 + 0x1a) & 1) != 0)) goto LAB_ram_0012898c;
        }
        else if ((puVar7 != (undefined4 *)0x0) && (iVar4 = puVar7[5], iVar4 != 0)) {
          if (*(char *)((int)piVar5 + 0x1b) == '\x02') {
            FUN_ram_000efe3c(0x14,**(undefined2 **)(param_1 + 0x3a04),0,0);
            iVar4 = puVar7[5];
            *(undefined1 *)((int)piVar5 + 0x1b) = 0;
          }
          uVar3 = *(undefined4 *)(puVar7[2] + 0x18);
          if (sVar2 == 0) {
            FUN_ram_001027b0(*(undefined4 *)(param_1 + 0x3b20),*puVar7,auStack_80);
            (*DAT_ram_0018c08c)(uVar3,local_3a,*(undefined1 *)(iVar4 + 0x67c),local_41,local_39);
          }
          DAT_ram_80037968 = DAT_ram_80037968 + 1;
          if (((DAT_ram_0018c178 != 0) && (*(char *)(iVar6 + 0x74) != '\0')) &&
             (*(undefined1 *)(iVar6 + 0x74) = 0, (**(byte **)(iVar6 + 0x78) & 1) != 0)) {
            FUN_ram_00158920(param_1,iVar6);
          }
          FUN_ram_00129fc8(param_1,puVar7[2]);
          bVar1 = *(byte *)((int)piVar5 + 0x1a);
          *(byte *)((int)piVar5 + 0x1a) = bVar1 & 0xfd;
          if ((bVar1 & 4) != 0) {
            FUN_ram_00127a90(iVar6);
            FUN_ram_00127c18(param_1,iVar6);
            uVar3 = 0;
            goto LAB_ram_00128994;
          }
        }
      }
    }
    iVar6 = *(int *)(iVar6 + 4);
  } while( true );
}


