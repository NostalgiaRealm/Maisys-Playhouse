
/* ==== __break @ 0042b586 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042b586-0042b586
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


