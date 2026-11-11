
/* ==== __break @ 140113b9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113b9-140113b9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


