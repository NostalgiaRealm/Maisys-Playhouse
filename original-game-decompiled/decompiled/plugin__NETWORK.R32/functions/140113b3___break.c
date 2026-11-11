
/* ==== __break @ 140113b3 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113b3-140113b3
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


