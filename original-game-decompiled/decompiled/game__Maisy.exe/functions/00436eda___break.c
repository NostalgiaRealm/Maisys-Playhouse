
/* ==== __break @ 00436eda ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436eda-00436eda
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


