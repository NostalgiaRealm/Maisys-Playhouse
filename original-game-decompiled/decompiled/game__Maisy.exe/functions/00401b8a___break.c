
/* ==== __break @ 00401b8a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00401b8a-00401b8a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


