
/* ==== __break @ 00479a58 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479a58-00479a58
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


