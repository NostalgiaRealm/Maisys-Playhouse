
/* ==== __break @ 00479abe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479abe-00479abe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


