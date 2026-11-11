
/* ==== __break @ 00447e1b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447e1b-00447e1b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


