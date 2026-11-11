
/* ==== __break @ 0045aabe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045aabe-0045aabe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


