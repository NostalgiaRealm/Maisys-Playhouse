
/* ==== __break @ 00447eda ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447eda-00447eda
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


