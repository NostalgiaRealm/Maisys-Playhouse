
/* ==== __break @ 00417fab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417fab-00417fab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


