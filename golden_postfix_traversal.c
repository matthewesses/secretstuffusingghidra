
/* golden_postfix_traversal(NODE*, int*, EXPRESSION_UNIT*) */

void golden_postfix_traversal(NODE *param_1,int *param_2,EXPRESSION_UNIT *param_3)
// ptr, nth, expression
{
  int iVar1; //nth
  long *plVar2;//parent 
  long *plVar3;//left
  long *plVar4;//right
  int iVar5;//module i think
  
  if (param_1 != (NODE *)0x0) {
    plVar2 = *(long **)(param_1 + 0x18);//sets memory doesn't free it
    if (plVar2 != (long *)0x0) {
      plVar3 = (long *)plVar2[3];
      if (plVar3 != (long *)0x0) {
        plVar4 = (long *)plVar3[3];
        if (plVar4 != (long *)0x0) {
          golden_postfix_traversal((NODE *)plVar4[3],param_2,param_3);
          golden_postfix_traversal((NODE *)plVar4[4],param_2,param_3);
          if (*plVar4 == 0) {
            iVar5 = *(int *)(plVar4 + 1);
            if (iVar5 == 2) goto LAB_001009c2;
          }
          else {
            if (*(int *)(plVar4 + 1) != 2) goto LAB_00100b10;
            iVar5 = 2;
          }
          iVar1 = *param_2;
          *(long *)(param_3 + (long)iVar1 * 0x10) = *plVar4;
          *(int *)((long)(param_3 + (long)iVar1 * 0x10) + 8) = iVar5;
          *param_2 = iVar1 + 1;
        }
        plVar4 = (long *)plVar3[4];
        if (plVar4 != (long *)0x0) {
          golden_postfix_traversal((NODE *)plVar4[3],param_2,param_3);
          golden_postfix_traversal((NODE *)plVar4[4],param_2,param_3);
          if (*plVar4 == 0) {
            iVar5 = *(int *)(plVar4 + 1);
            if (iVar5 == 2) goto LAB_001009c2;
          }
          else {
            if (*(int *)(plVar4 + 1) != 2) goto LAB_00100b10;
            iVar5 = 2;
          }
          iVar1 = *param_2;
          *(long *)(param_3 + (long)iVar1 * 0x10) = *plVar4;
          *(int *)((long)(param_3 + (long)iVar1 * 0x10) + 8) = iVar5;
          *param_2 = iVar1 + 1;
        }
        if (*plVar3 == 0) {
          iVar5 = *(int *)(plVar3 + 1);
          if (iVar5 == 2) goto LAB_001009c2;
        }
        else {
          if (*(int *)(plVar3 + 1) != 2) goto LAB_00100b10;
          iVar5 = 2;
        }
        iVar1 = *param_2;
        *(long *)(param_3 + (long)iVar1 * 0x10) = *plVar3;
        *(int *)((long)(param_3 + (long)iVar1 * 0x10) + 8) = iVar5;
        *param_2 = iVar1 + 1;
      }
      plVar3 = (long *)plVar2[4];
      if (plVar3 != (long *)0x0) {
        plVar4 = (long *)plVar3[3];
        if (plVar4 != (long *)0x0) {
          golden_postfix_traversal((NODE *)plVar4[3],param_2,param_3);
          golden_postfix_traversal((NODE *)plVar4[4],param_2,param_3);
          if (*plVar4 == 0) {
            iVar5 = *(int *)(plVar4 + 1);
            if (iVar5 == 2) goto LAB_001009c2;
          }
          else {
            if (*(int *)(plVar4 + 1) != 2) goto LAB_00100b10;
            iVar5 = 2;
          }
          iVar1 = *param_2;
          *(long *)(param_3 + (long)iVar1 * 0x10) = *plVar4;
          *(int *)((long)(param_3 + (long)iVar1 * 0x10) + 8) = iVar5;
          *param_2 = iVar1 + 1;
        }
        plVar4 = (long *)plVar3[4];
        if (plVar4 != (long *)0x0) {
          golden_postfix_traversal((NODE *)plVar4[3],param_2,param_3);
          golden_postfix_traversal((NODE *)plVar4[4],param_2,param_3);
          if (*plVar4 == 0) {
            iVar5 = *(int *)(plVar4 + 1);
            if (iVar5 == 2) goto LAB_001009c2;
          }
          else {
            if (*(int *)(plVar4 + 1) != 2) goto LAB_00100b10;
            iVar5 = 2;
          }
          iVar1 = *param_2;
          *(long *)(param_3 + (long)iVar1 * 0x10) = *plVar4;
          *(int *)((long)(param_3 + (long)iVar1 * 0x10) + 8) = iVar5;
          *param_2 = iVar1 + 1;
        }
        if (*plVar3 == 0) {
          iVar5 = *(int *)(plVar3 + 1);
          if (iVar5 == 2) goto LAB_001009c2;
        }
        else {
          if (*(int *)(plVar3 + 1) != 2) goto LAB_00100b10;
          iVar5 = 2;
        }
        iVar1 = *param_2;
        *(long *)(param_3 + (long)iVar1 * 0x10) = *plVar3;
        *(int *)((long)(param_3 + (long)iVar1 * 0x10) + 8) = iVar5;
        *param_2 = iVar1 + 1;
      }
      if (*plVar2 == 0) {
        iVar5 = *(int *)(plVar2 + 1);
        if (iVar5 == 2) goto LAB_001009c2;
      }
      else {
        if (*(int *)(plVar2 + 1) != 2) goto LAB_00100b10;
        iVar5 = 2;
      }
      iVar1 = *param_2;
      *(long *)(param_3 + (long)iVar1 * 0x10) = *plVar2;
      *(int *)((long)(param_3 + (long)iVar1 * 0x10) + 8) = iVar5;
      *param_2 = iVar1 + 1;
    }
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 != (long *)0x0) {
      plVar3 = (long *)plVar2[3];
      if (plVar3 != (long *)0x0) {
        plVar4 = (long *)plVar3[3];
        if (plVar4 != (long *)0x0) {
          golden_postfix_traversal((NODE *)plVar4[3],param_2,param_3);
          golden_postfix_traversal((NODE *)plVar4[4],param_2,param_3);
          if (*plVar4 == 0) {
            iVar5 = *(int *)(plVar4 + 1);
            if (iVar5 == 2) goto LAB_001009c2;
          }
          else {
            if (*(int *)(plVar4 + 1) != 2) goto LAB_00100b10;
            iVar5 = 2;
          }
          iVar1 = *param_2;
          *(long *)(param_3 + (long)iVar1 * 0x10) = *plVar4;
          *(int *)((long)(param_3 + (long)iVar1 * 0x10) + 8) = iVar5;
          *param_2 = iVar1 + 1;
        }
        plVar4 = (long *)plVar3[4];
        if (plVar4 != (long *)0x0) {
          golden_postfix_traversal((NODE *)plVar4[3],param_2,param_3);
          golden_postfix_traversal((NODE *)plVar4[4],param_2,param_3);
          if (*plVar4 == 0) {
            iVar5 = *(int *)(plVar4 + 1);
            if (iVar5 == 2) goto LAB_001009c2;
          }
          else {
            if (*(int *)(plVar4 + 1) != 2) goto LAB_00100b10;
            iVar5 = 2;
          }
          iVar1 = *param_2;
          *(long *)(param_3 + (long)iVar1 * 0x10) = *plVar4;
          *(int *)((long)(param_3 + (long)iVar1 * 0x10) + 8) = iVar5;
          *param_2 = iVar1 + 1;
        }
        if (*plVar3 == 0) {
          iVar5 = *(int *)(plVar3 + 1);
          if (iVar5 == 2) goto LAB_001009c2;
        }
        else {
          if (*(int *)(plVar3 + 1) != 2) goto LAB_00100b10;
          iVar5 = 2;
        }
        iVar1 = *param_2;
        *(long *)(param_3 + (long)iVar1 * 0x10) = *plVar3;
        *(int *)((long)(param_3 + (long)iVar1 * 0x10) + 8) = iVar5;
        *param_2 = iVar1 + 1;
      }
      plVar3 = (long *)plVar2[4];
      if (plVar3 != (long *)0x0) {
        plVar4 = (long *)plVar3[3];
        if (plVar4 != (long *)0x0) {
          golden_postfix_traversal((NODE *)plVar4[3],param_2,param_3);
          golden_postfix_traversal((NODE *)plVar4[4],param_2,param_3);
          if (*plVar4 == 0) {
            iVar5 = *(int *)(plVar4 + 1);
            if (iVar5 == 2) goto LAB_001009c2;
          }
          else {
            if (*(int *)(plVar4 + 1) != 2) goto LAB_00100b10;
            iVar5 = 2;
          }
          iVar1 = *param_2;
          *(long *)(param_3 + (long)iVar1 * 0x10) = *plVar4;
          *(int *)((long)(param_3 + (long)iVar1 * 0x10) + 8) = iVar5;
          *param_2 = iVar1 + 1;
        }
        golden_postfix_traversal((NODE *)plVar3[4],param_2,param_3);
        if (*plVar3 == 0) {
          iVar5 = *(int *)(plVar3 + 1);
          if (iVar5 == 2) goto LAB_001009c2;
        }
        else {
          if (*(int *)(plVar3 + 1) != 2) goto LAB_00100b10;
          iVar5 = 2;
        }
        iVar1 = *param_2;
        *(long *)(param_3 + (long)iVar1 * 0x10) = *plVar3;
        *(int *)((long)(param_3 + (long)iVar1 * 0x10) + 8) = iVar5;
        *param_2 = iVar1 + 1;
      }
      if (*plVar2 == 0) {
        iVar5 = *(int *)(plVar2 + 1);
        if (iVar5 == 2) goto LAB_001009c2;
      }
      else {
        if (*(int *)(plVar2 + 1) != 2) goto LAB_00100b10;
        iVar5 = 2;
      }
      iVar1 = *param_2;
      *(long *)(param_3 + (long)iVar1 * 0x10) = *plVar2;
      *(int *)((long)(param_3 + (long)iVar1 * 0x10) + 8) = iVar5;
      *param_2 = iVar1 + 1;
    }
    if (*(long *)param_1 == 0) {
      iVar5 = *(int *)(param_1 + 8);
      if (iVar5 == 2) {
LAB_001009c2:
                    /* WARNING: Subroutine does not return */
        __assert_fail("ptr->cutline != UNDEFINED_CUTLINE","test.c",0x50,
                      "void golden_postfix_traversal(node_t*, int*, expression_unit_t*)");
      }
    }
    else {
      if (*(int *)(param_1 + 8) != 2) {
LAB_00100b10:
                    /* WARNING: Subroutine does not return */
        __assert_fail("ptr->cutline == UNDEFINED_CUTLINE","test.c",0x4d,
                      "void golden_postfix_traversal(node_t*, int*, expression_unit_t*)");
      }
      iVar5 = 2;
    }
    iVar1 = *param_2;
    *(long *)(param_3 + (long)iVar1 * 0x10) = *(long *)param_1;
    *(int *)((long)(param_3 + (long)iVar1 * 0x10) + 8) = iVar5;
    *param_2 = iVar1 + 1;
  }
  return;
}
