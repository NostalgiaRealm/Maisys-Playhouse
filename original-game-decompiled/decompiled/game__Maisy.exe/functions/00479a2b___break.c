
/* ==== __break @ 00479a2b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479a2b-00479a2b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


