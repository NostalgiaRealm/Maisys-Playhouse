
/* ==== __break @ 004355cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004355cf-004355cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


