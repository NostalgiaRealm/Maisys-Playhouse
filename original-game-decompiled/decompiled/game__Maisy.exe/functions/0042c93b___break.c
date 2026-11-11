
/* ==== __break @ 0042c93b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042c93b-0042c93b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


