
/* ==== __break @ 0042c93f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042c93f-0042c93f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


