
/* ==== __break @ 00425bdd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00425bdd-00425bdd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


