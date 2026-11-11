
/* ==== __break @ 0048a33b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048a33b-0048a33b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


