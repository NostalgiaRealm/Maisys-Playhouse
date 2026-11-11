
/* ==== __break @ 00430acf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00430acf-00430acf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


