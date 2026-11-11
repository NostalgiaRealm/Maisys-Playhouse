
/* ==== __break @ 00425bdf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00425bdf-00425bdf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


