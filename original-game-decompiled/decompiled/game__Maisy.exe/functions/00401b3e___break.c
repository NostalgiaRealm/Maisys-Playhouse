
/* ==== __break @ 00401b3e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00401b3e-00401b3e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


