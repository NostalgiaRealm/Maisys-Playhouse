
/* ==== __break @ 00401b84 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00401b84-00401b84
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


