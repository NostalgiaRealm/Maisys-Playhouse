
/* ==== __break @ 00430aca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00430aca-00430aca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


