
/* ==== __break @ 004100ac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004100ac-004100ac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


