
/* ==== __break @ 0045aabc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045aabc-0045aabc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


