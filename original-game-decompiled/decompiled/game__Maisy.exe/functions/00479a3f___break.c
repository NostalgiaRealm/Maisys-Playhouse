
/* ==== __break @ 00479a3f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479a3f-00479a3f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


