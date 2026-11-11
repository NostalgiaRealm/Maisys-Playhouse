
/* ==== __break @ 00488f9b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00488f9b-00488f9b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


