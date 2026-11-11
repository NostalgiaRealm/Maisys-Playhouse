
/* ==== __break @ 00460613 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00460613-00460613
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


