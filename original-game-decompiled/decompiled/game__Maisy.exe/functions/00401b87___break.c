
/* ==== __break @ 00401b87 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00401b87-00401b87
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


