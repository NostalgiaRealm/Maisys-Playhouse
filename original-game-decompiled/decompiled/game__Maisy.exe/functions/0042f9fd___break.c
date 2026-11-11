
/* ==== __break @ 0042f9fd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042f9fd-0042f9fd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


