
/* ==== __break @ 00460616 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00460616-00460616
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


