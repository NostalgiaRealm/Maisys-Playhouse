
/* ==== __break @ 0044997b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044997b-0044997b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


