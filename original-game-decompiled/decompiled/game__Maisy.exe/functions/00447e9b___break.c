
/* ==== __break @ 00447e9b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447e9b-00447e9b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


