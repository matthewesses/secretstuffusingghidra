/* golden_init_slicing_tree(NODE*, int) */

long * golden_init_slicing_tree(NODE *param_1,int param_2)
//param_1 is par, param_2 is n
{
  int iVar1; 
  long lVar2;
  int iVar3;
  long *plVar4; //these longs are node_t types but extended for easier use
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  
  iVar3 = golden_num_modules;
  if ((-1 < param_2) && (param_2 < golden_num_modules)) {
    iVar1 = golden_num_modules + -1; //just sets it for reading ease
    plVar4 = (long *)malloc(0x28); //node_t= long
    lVar10 = golden_modules; //modules but for golden
    if (iVar1 == param_2) {
      *(undefined4 *)(plVar4 + 1) = 2; //undefined cutline i think
      plVar4[4] = 0; //
      plVar4[3] = 0;
      plVar4[2] = (long)param_1;
      *plVar4 = lVar10 + (long)iVar1 * 0x18;
    }
    else {
      plVar4[2] = (long)param_1;
      *plVar4 = 0;
      *(undefined4 *)(plVar4 + 1) = 0;
      plVar5 = (long *)malloc(0x28);
      lVar2 = golden_modules;
      plVar4[4] = (long)plVar5;
      *(undefined4 *)(plVar5 + 1) = 2;
      plVar5[4] = 0;
      plVar5[3] = 0;
      lVar10 = (long)param_2 * 0x18;
      plVar5[2] = (long)plVar4;
      iVar11 = param_2 + 1;
      *plVar5 = lVar10 + lVar2;
      if ((iVar11 < 0) || (iVar3 <= iVar11)) goto LAB_00100535;
      plVar5 = (long *)malloc(0x28);
      if (iVar1 == iVar11) {
        *(undefined4 *)(plVar5 + 1) = 2;
        plVar5[4] = 0;
        plVar5[3] = 0;
        plVar5[2] = (long)plVar4;
        *plVar5 = lVar2 + (long)iVar1 * 0x18;
      }
      else {
        *plVar5 = 0;
        *(undefined4 *)(plVar5 + 1) = 0;
        plVar5[2] = (long)plVar4;
        plVar6 = (long *)malloc(0x28);
        plVar5[4] = (long)plVar6;
        iVar11 = param_2 + 2;
        *(undefined4 *)(plVar6 + 1) = 2;
        plVar6[4] = 0;
        plVar6[3] = 0;
        plVar6[2] = (long)plVar5;
        *plVar6 = lVar2 + 0x18 + lVar10;
        if ((iVar11 < 0) || (iVar3 <= iVar11)) goto LAB_00100535;
        plVar6 = (long *)malloc(0x28);
        if (iVar1 == iVar11) {
          *(undefined4 *)(plVar6 + 1) = 2;
          plVar6[4] = 0;
          plVar6[3] = 0;
          plVar6[2] = (long)plVar5;
          *plVar6 = lVar2 + (long)iVar1 * 0x18;
        }
        else {
          *plVar6 = 0;
          *(undefined4 *)(plVar6 + 1) = 0;
          plVar6[2] = (long)plVar5;
          plVar7 = (long *)malloc(0x28);
          *(undefined4 *)(plVar7 + 1) = 2;
          plVar7[4] = 0;
          plVar7[3] = 0;
          plVar6[4] = (long)plVar7;
          plVar7[2] = (long)plVar6;
          *plVar7 = lVar2 + 0x30 + lVar10;
          iVar11 = param_2 + 3;
          if ((iVar11 < 0) || (iVar3 <= iVar11)) goto LAB_00100535;
          plVar7 = (long *)malloc(0x28);
          if (iVar1 == iVar11) {
            *(undefined4 *)(plVar7 + 1) = 2;
            plVar7[4] = 0;
            plVar7[3] = 0;
            plVar7[2] = (long)plVar6;
            *plVar7 = lVar2 + (long)iVar1 * 0x18;
          }
          else {
            *plVar7 = 0;
            *(undefined4 *)(plVar7 + 1) = 0;
            plVar7[2] = (long)plVar6;
            plVar8 = (long *)malloc(0x28);
            *(undefined4 *)(plVar8 + 1) = 2;
            plVar8[4] = 0;
            plVar8[3] = 0;
            plVar7[4] = (long)plVar8;
            plVar8[2] = (long)plVar7;
            *plVar8 = lVar2 + 0x48 + lVar10;
            iVar11 = param_2 + 4;
            if ((iVar11 < 0) || (iVar3 <= iVar11)) goto LAB_00100535;
            plVar8 = (long *)malloc(0x28);
            if (iVar1 == iVar11) {
              *(undefined4 *)(plVar8 + 1) = 2;
              plVar8[4] = 0;
              plVar8[3] = 0;
              plVar8[2] = (long)plVar7;
              *plVar8 = lVar2 + (long)iVar1 * 0x18;
            }
            else {
              plVar8[2] = (long)plVar7;
              *plVar8 = 0;
              *(undefined4 *)(plVar8 + 1) = 0;
              plVar9 = (long *)malloc(0x28);
              plVar8[4] = (long)plVar9;
              *(undefined4 *)(plVar9 + 1) = 2;
              plVar9[4] = 0;
              plVar9[3] = 0;
              plVar9[2] = (long)plVar8;
              *plVar9 = lVar2 + 0x60 + lVar10;
              lVar10 = golden_init_slicing_tree((NODE *)plVar8,param_2 + 5);
              plVar8[3] = lVar10;
            }
            plVar7[3] = (long)plVar8;
          }
          plVar6[3] = (long)plVar7;
        }
        plVar5[3] = (long)plVar6;
      }
      plVar4[3] = (long)plVar5;
    }
    return plVar4;
  }
LAB_00100535:
                    /* WARNING: Subroutine does not return */
  __assert_fail("n >= 0 && n < golden_num_modules","test.c",0x20,
                "node_t* golden_init_slicing_tree(node_t*, int)");
}
