
/* ==== __break @ 00489fab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489fab-00489fab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


