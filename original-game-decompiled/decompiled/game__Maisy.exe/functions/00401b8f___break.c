
/* ==== __break @ 00401b8f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00401b8f-00401b8f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


